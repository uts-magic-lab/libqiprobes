TRACEPOINT_EVENT(qi_probes_tests_hello, counting,
        TP_ARGS(int, counter),
        TP_FIELDS(ctf_integer(int, counter, counter))
)
TRACEPOINT_EVENT(qi_probes_tests_hello, saying,
        TP_ARGS(int, message),
        TP_FIELDS(ctf_integer(int, message, message))
)
