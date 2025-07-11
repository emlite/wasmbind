#include <jsbind/jsbind.hpp>
#include <webbind/CSSStyleDeclaration.hpp>
#include <webbind/Document.hpp>
#include <webbind/Element.hpp>
#include <webbind/HTMLButtonElement.hpp>
#include <webbind/HTMLCollection.hpp>
#include <webbind/PointerEvent.hpp>
#include <webbind/Window.hpp>

using jsbind::Console;
using jsbind::Function;

int main() {
    Console con;
    auto document = window().document();
    auto bodies   = document.getElementsByTagName("body");
    if (bodies.length() == 0) {
        con.log("I Ain't got Nobody!");
        return -1;
    }
    auto body   = bodies.item(0);
    auto button = document.createElement("BUTTON")
                      .as<HTMLButtonElement>();
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