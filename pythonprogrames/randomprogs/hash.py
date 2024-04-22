import hashlib

def one_way_hash(data):
    """Compute the one way hash of a string"""
    data = data.encode('utf-8') # convert string to bytes
    hash_obj = hashlib.sha256(data) # create a hash object
    return hash_obj.hexdigest() # compute the hash and return as a string

if __name__ == "__main__":
    # sample usage
    password = "my password"
    hashed_password = one_way_hash(password)
    print(f"Hashed password: {hashed_password}")