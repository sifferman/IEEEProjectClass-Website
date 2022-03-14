// host to big endian
#define __htobe32(...) htonl(__VA_ARGS__)
#define __htobe16(...) htons(__VA_ARGS__)

// host to little endian
#define __htole32(...) __builtin_bswap32(htonl(__VA_ARGS__))
#define __htole16(...) __builtin_bswap16(htons(__VA_ARGS__))

// big endian to host
#define __betoh32(...) ntohl(__VA_ARGS__)
#define __betoh16(...) ntohs(__VA_ARGS__)

// little endian to host
#define __letoh32(...) __builtin_bswap32(ntohl(__VA_ARGS__))
#define __letoh16(...) __builtin_bswap16(ntohs(__VA_ARGS__))
