#include <jsbind/jsbind.hpp>
#include <webbind/webbind.hpp>

using jsbind::Console;
using jsbind::Function;
using namespace webbind;

int main() {
    emlite::init();
    Console con;
    auto document = window().document();
    auto bodies   = document.getElementsByTagName("body");
    if (bodies.length() == 0) {
        con.log("I Ain't got Nobody!");
        return -1;
    }
    auto body   = bodies.item(0);
    auto button = document.createElement("BUTTON")
                      .safe_cast<HTMLButtonElement>().unwrap();
    button.textContent("Click me");
    button.addEventListener(
        "click",
        Function::Fn<jsbind::Undefined(Event)>([=](auto e) {
            con.log(e.template as<PointerEvent>().clientX());
        })
    );
    body.appendChild(button);
    auto style = button.style();
    style.setProperty("color", "red");
    style.setProperty("background-color", "#aaf");
    style.setProperty("border", "solid");
}
