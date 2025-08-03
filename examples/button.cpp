#include <jsbind/jsbind.hpp>
#include <webbind/webbind.hpp>

using jsbind::Console;
using jsbind::Function;

int main() {
    Console con;
    auto h = jsbind::btoa("hello").unwrap();
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
        Function::Fn<void(PointerEvent)>([=](auto e) {
            con.log(e.clientX());
        })
    );
    body.appendChild(button);
    auto style = button.style();
    style.setProperty("color", "red");
    style.setProperty("background-color", "#aaf");
    style.setProperty("border", "solid");
}