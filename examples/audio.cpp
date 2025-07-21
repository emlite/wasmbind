#include <jsbind/jsbind.hpp>
#include <webbind/webbind.hpp>

using jsbind::Function;

int main() {
    AudioContext context;
    OscillatorNode oscillator(context);
    oscillator.type(OscillatorType::triangle);
    oscillator.frequency().value(261.63); // Middle C

    auto document = window().document();
    auto body =
        document.getElementsByTagName("body").item(0);
    auto button = document.createElement("BUTTON");
    button.textContent("Click me");
    button.addEventListener(
        "click",
        Function::Fn<void(PointerEvent)>([=](auto /*p*/) {
            auto os = oscillator.clone();
            os.connect(context.destination().as<AudioParam>(
            ));
            os.start(0.0);
        })
    );
    body.appendChild(button);
    return 0;
}
