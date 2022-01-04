#include <iostream>
#include "httplib.h"

int main() {
    httplib::Server svr;

    svr.Get("/hi", [](const auto &, auto &res) {
        res.set_content("Hello World!", "text/plain");
    });

    std::cout << "start server..." << std::endl;
    svr.listen("0.0.0.0", 8080);
}
