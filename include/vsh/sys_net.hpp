#ifndef __SYS_NET_HPP__
#define __SYS_NET_HPP__

#include <netdb.h>
#include <netex/net.h>

#define _VSH_BEGIN namespace vsh {
#define _VSH_END }

_VSH_BEGIN
CDECL_BEGIN

// sys_net_012F752F // ?

int32_t sys_net_051EE3EE(struct pollfd *fds, int32_t nfds, int32_t ms); // socketpoll()

//int32_t sys_net_05BD4438(sys_net_udpp2p_test_param_t *param); // sys_net_get_udpp2p_test_param()
//#define sys_net_get_udpp2p_test_param sys_net_05BD4438

// sys_net_0B017E2B // ?

//int32_t sys_net_10B81ED6(sys_net_udpp2p_test_param_t *param); // sys_net_set_udpp2p_test_param()
//#define sys_net_set_udpp2p_test_param sys_net_10B81ED6

int32_t sys_net_139A9E9B(sys_net_initialize_parameter_t *param); // sys_net_initialize_network_ex()

int32_t sys_net_13EFE7F5(int32_t s, struct sockaddr *addr, socklen_t *paddrlen); // getsockname()

// sys_net_16F1CE55 // ?
// sys_net_1C8FC14B // ?

int32_t sys_net_1D14D6E4(struct in_addr *primary, struct in_addr *secondary); // sys_net_get_lib_name_server()

ssize_t sys_net_1F953B9F(int32_t s, void *buf, size_t len, int32_t flags, struct sockaddr *addr, socklen_t *paddrlen); // recvfrom()

int32_t sys_net_27FB339D(int32_t if_id, int32_t code, void *ptr, int32_t len); // sys_net_if_ctl()

int32_t sys_net_28E208BB(int32_t socket, int32_t backlog); // listen()

// sys_net_2AAE42A8 // ?
// sys_net_3575B141 // ?

int32_t sys_net_368823C0(sys_net_test_param_t *param); // sys_net_get_netemu_test_param()

//int32_t sys_net_3B27C780(int32_t s, sys_net_sockinfo_t *p, int32_t n); // sys_net_get_sockinfo()
//#define sys_net_get_sockinfo sys_net_3B27C780

// sys_net_3C7189C0 // ?
// sys_net_3C95AA78 // ?
// sys_net_3CA02562 // ?
// sys_net_3CFA784B // ?

int32_t sys_net_3F09E20A(int32_t nfds, struct fd_set *readfds, struct fd_set *writefds, struct fd_set *exceptfds, struct timeval *timeout); // socketselect()

int32_t sys_net_4323CDA7(uint64_t *arg1, int32_t arg2, int32_t arg3, uint64_t *arg4, int32_t arg5, int32_t arg6, int32_t arg7); // ? (&var_AC, 6, 0, &var_B0, 0, 0, 0)

int32_t sys_net_44328AA2(int32_t id, int32_t *pflags); // sys_net_close_dump()

// sys_net_44F05E73 // ?
// sys_net_46497DA6 // ?
// sys_net_4AB0B9B9 // sys_net_set_test_param

in_addr_t sys_net_506AD863(const char *cp); // inet_network()

int32_t sys_net_5420E419(void); // sys_net_show_nameserver()

in_addr_t sys_net_566893CE(struct in_addr in); // inet_lnaof()

// sys_net_5853BE79 // ?

int32_t sys_net_5A045BD1(int32_t s, int32_t level, int32_t optname, void *optval, socklen_t *optlen); // getsockopt()

// sys_net_5D0CA0E8 // ?
// sys_net_6005CDE1 // _sys_net_errno_loc

int32_t sys_net_64F66D35(int32_t s, const struct sockaddr *addr, socklen_t addrlen); // connect()
static int32_t connect(int32_t s, const struct sockaddr* addr, socklen_t addrlen) { return sys_net_64F66D35(s, addr, addrlen); }

// sys_net_6B6CAF26 // ?

int32_t sys_net_6DB6E8CD(int32_t s); // socketclose()

struct hostent *sys_net_71F4C717(const char *name); // gethostbyname()

// sys_net_73D364D5 // ?
// sys_net_7608719D // ?

int32_t sys_net_7687D48C(int32_t retrans, int32_t retry, int32_t flags); // sys_net_set_resolver_configurations()

// sys_net_78EAE3FB // ?

int32_t sys_net_79B61646(void); // sys_net_show_route()

// sys_net_7E6FB08D // ?
// sys_net_827CA646 // ?
// sys_net_853BE146 // ?

char *sys_net_858A930B(struct in_addr in); // inet_ntoa()

// sys_net_878472F0 // ? (arg1, arg2, 1) 

int32_t sys_net_88F03575(int32_t s, int32_t level, int32_t optname, const void *optval, socklen_t optlen); // setsockopt()

int32_t sys_net_89C9917C(int32_t id, void *buf, int32_t len, int32_t *pflags); // sys_net_read_dump()

int32_t sys_net_8AF3825E(int32_t af, const char *src, void *dst); // inet_pton()

int32_t sys_net_8CCF05ED(sys_net_thread_id_t tid, int32_t flags); // sys_net_abort_resolver()

int32_t sys_net_8D1B77FB(int32_t s, int32_t flags); // sys_net_abort_socket()

// sys_net_8F3E1687 // ?

int32_t sys_net_92852B93(int32_t socket, uint32_t packet_id, const char *interface); // ? e.g. (s, 0xC020698C, "eth0");

// sys_net_943231D1 // ?
// sys_net_959C4441 // ? blr

ssize_t sys_net_9647570B(int32_t s, const void *buf, size_t len, int32_t flags, const struct sockaddr *addr, socklen_t addrlen); // sendto()

int32_t sys_net_9A318259(struct in_addr *primary, struct in_addr *secondary); // sys_net_set_lib_name_server()

// sys_net_9A62982A // ?

int32_t sys_net_9C056962(int32_t family, int32_t type, int32_t protocol); // socket()

// sys_net_A2B22757 // ?

int32_t sys_net_A50777C6(int32_t s, int32_t how); // shutdown()

// sys_net_A5A86557 // sys_net_get_test_param

//int32_t sys_net_A765D029(int32_t s, sys_net_sockinfo_ex_t *p, int32_t n, int32_t flags); // sys_net_get_sockinfo_ex()

int32_t sys_net_A9A079E0(const char *cp, struct in_addr *addr); // inet_aton()

int32_t sys_net_AB447704(int32_t len, int32_t flags); // sys_net_open_dump()

// sys_net_ABCB26A1 // ?

ssize_t sys_net_AD09481B(int32_t s, const struct msghdr *msg, int32_t flags); // sendmsg()

// sys_net_AEB2EC57 // ? sys_timer_usleep
// sys_net_AFC21C3E // ?

int32_t sys_net_B0A59804(int32_t s, const struct sockaddr *addr, socklen_t addrlen); // bind()

// sys_net_B15E9321 // ?

struct in_addr sys_net_B4152C74(in_addr_t net, in_addr_t host); // inet_makeaddr()

int32_t sys_net_B48636C4(void); // sys_net_show_ifconfig()

int32_t sys_net_B68D5625(void); // sys_net_finalize_network()

// sys_net_C2F38FF1 // ?
// sys_net_C82191E3 // ? (void)
// sys_net_C9157D30 // _sys_net_h_errno_loc

int32_t sys_net_C94F6939(int32_t s, struct sockaddr *addr, socklen_t *paddrlen); // accept()

const char *sys_net_C98A3146(int32_t af, const void *src, char *dst, socklen_t size); // inet_ntop()

ssize_t sys_net_C9D09C34(int32_t s, struct msghdr *msg, int32_t flags); // recvmsg()

// sys_net_D1A13957 // ? gethostbyname, (?, const char *name)
// sys_net_D4C6B098 // ? 

in_addr_t sys_net_DABBC2C0(const char *cp); // inet_addr()

ssize_t sys_net_DC751B40(int32_t s, const void *buffer, size_t size, int32_t flags); // send()

// sys_net_DEA29EF4 // ?

int32_t sys_net_E2434507(sys_net_test_param_t *param); // sys_net_set_netemu_test_param()

in_addr_t sys_net_E39A62A7(struct in_addr in); // inet_netof()

// sys_net_E61CB17A // ?
// sys_net_F0645452 // ?
// sys_net_F5F39114 // sys_ppu_thread_join, (sys_ppu_thread_t thread_id, uint64_t *vptr)

struct hostent *sys_net_F7AC8941(const char *addr, socklen_t len, int32_t type); // gethostbyaddr()

// sys_net_F7ACD655 // ?

int32_t sys_net_F9EC2DB6(int32_t s, struct sockaddr *addr, socklen_t *paddrlen); // getpeername()

// sys_net_FAFD69A4 // ?

// sys_net_FB03C635 // ? (?, const char *addr, socklen_t len, int32_t type)

ssize_t sys_net_FBA04F37(int32_t s, void *buf, size_t len, int32_t flags); // recv()
static ssize_t recv(int32_t s, void* buf, size_t len, int32_t flags) { return sys_net_FBA04F37(s, buf, len, flags); }

// sys_net_FD58F18A // ? -> sys_net_878472F0()

int32_t sys_net_FDB8F926(sys_net_thread_id_t tid, int32_t flags); // sys_net_free_thread_context()

CDECL_END
_VSH_END

#endif // __SYS_NET_HPP__