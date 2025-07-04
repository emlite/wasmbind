#include <webbind/Window.hpp>
#include <webbind/window.hpp>
#include <emlite/emlite.hpp>

Window window() {
    return emlite::Val::global("window").as<Window>();
}