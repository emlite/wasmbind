#include <webbind/FragmentDirective.hpp>


FragmentDirective FragmentDirective::take_ownership(Handle h) noexcept {
        return FragmentDirective(h);
    }
FragmentDirective FragmentDirective::clone() const noexcept { return *this; }
FragmentDirective::FragmentDirective(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FragmentDirective::FragmentDirective(const emlite::Val &val) noexcept: emlite::Val(val) {}


