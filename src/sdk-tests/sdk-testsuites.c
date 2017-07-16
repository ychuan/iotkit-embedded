#include "sdk-testsuites_internal.h"

int main(int argc, char *argv[])
{
    LITE_openlog("test");
    LITE_set_loglevel(LOG_DEBUG_LEVEL);

    unittest_string_utils();
    unittest_json_parser();
    unittest_json_token();

    LITE_closelog();
    return 0;
}