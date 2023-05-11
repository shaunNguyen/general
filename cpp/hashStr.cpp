#define LENGTH_SALT_SHA512_STRING 16
#define LENGTH_SALT_SHA256_STRING 8

string getHashPasswd(const std::string &password, const std::string &hashAlgorithm)
{
    //get randomSalt and combine hashAlgorithm

    string randomSalt; 

    if (hashAlgorithm == "sha512")
    {
        randomSalt = "$6$" + getSaltRandom(LENGTH_SALT_SHA512_STRING);
    }

    if (hashAlgorithm == "sha256")
    {
        randomSalt = "$5$" + getSaltRandom(LENGTH_SALT_SHA256_STRING);
    }

    //hash password
    string hashedPasswd;
    hashedPasswd = crypt(password.c_str(), randomSalt.c_str());

    return hashedPasswd;
}

