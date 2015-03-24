#ifndef __HLS_DownLoad__misc__
#define __HLS_DownLoad__misc__

struct hls_args {
    int loglevel;
    int use_best;
    int url_passed;
    int skip_encryption;
    int custom_filename;
    int force_overwrite;
    int dump_ts_urls;
    int dump_dec_cmd;
    char filename[256];
    char url[2048];
};

struct hls_args hls_args;

int str_to_bin(uint8_t *data, char *hexstring, int len);
int parse_argv(int argc, const char * argv[]);

#endif /* defined(__HLS_DownLoad__misc__) */
