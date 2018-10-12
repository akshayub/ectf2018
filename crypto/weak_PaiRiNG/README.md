# Weak PaRiNG

# Points
150

# Description
Super Secure Inc. has published the public keys of all its admins, because well, they're supposed to be public.
To gain admin access to the server you'll need the private key of one of the admins, and you sure as hell can't get that because they've used 512 bit super secure primes to generate their public keys. Good luck trying to factorize that.

On a philosophical note, is anything in the world truly random?

Gain admin access to the server and obtain the flag.

`nc ip:40010`

# Resources

RSA PKCS#1 v1.5 Signing: https://www.dlitz.net/software/pycrypto/api/2.6/Crypto.Signature.PKCS1_v1_5-module.html 

# Hint
Did you read the problem title clearly?

Someone said they might have had a weak pseudo random number generator
