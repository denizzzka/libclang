module main;

import unit_threaded;

int main(string[] args) {
    return args.runTests!(
        "raw",
        "ut.enum_",
    );
}