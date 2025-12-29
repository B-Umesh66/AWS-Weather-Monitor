// env.h
#include <pgmspace.h>

// Amazon Root CA 1
static const char cacert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
... Paste your AWS Root CA content here ...
-----END CERTIFICATE-----
)EOF";

// Device Certificate
static const char client_cert[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----
... Paste your Device Certificate content here ...
-----END CERTIFICATE-----
)EOF";

// Private Key
static const char privkey[] PROGMEM = R"EOF(
-----BEGIN RSA PRIVATE KEY-----
... Paste your Private Key content here ...
-----END RSA PRIVATE KEY-----
)EOF";