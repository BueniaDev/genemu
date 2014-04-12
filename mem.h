
extern int Z80_BUSREQ;
extern int Z80_RESET;

void mem_init(int romsize);
void mem_log(const char *subs, const char *fmt, ...);
int load_rom(const char *fn);