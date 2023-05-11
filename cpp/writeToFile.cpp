// basic file operations
#include <iostream>
#include <fstream>
using namespace std;

int main () {

    string host = "1.1.1.1";
    string port = "514";
    //string tls = "true";
    string tls = "false";
    char fileName[250] = "example.conf";

    string data;
    char dataBuff[1250];
    if (tls == "true")
    {
        data = "#make gtls driver the default and set certificate files \
                \nglobal(\
                \nDefaultNetstreamDriver=\"gtls\"\
                \nDefaultNetstreamDriverCAFile=\"/home/admin/ca.pem\"\
                \nDefaultNetstreamDriverCerFile=\"/home/admin/tlsclient/cert.pem\"\
                \nDefaultNetstreamDriverKeyFile=\"/home/admin/tlsclient/key.pem\")\
                \n\
                \n#set up the action for all messages\
                \naction(type=\"omfwd\"\
                \ntarget=\"%s\"\
                \nprotocol=\"tcp\"\
                \nport=\"%s\"\
                \nStreamDriver=\"gtls\"\
                \nStreamDriverMode=\"1\"\
                \nStreamDriverAuthMode=\"x509/name\"\
                \nStreamDriverPermittedPeers=\"%s\")";
        sprintf(dataBuff, data.c_str(), host.c_str(), port.c_str(), host.c_str());
    }
    else
    {
        data =  "*.* @%s:%s ";
        sprintf(dataBuff, data.c_str(), host.c_str(), port.c_str());
    }


    ofstream fSocket (fileName);
    if (fSocket.is_open())
    {
        fSocket << dataBuff;
        fSocket.close();
        cout << "OK" << endl;
    }
    else
    {
        cout << "FAILED" << endl;
    }

  return 0;
}

