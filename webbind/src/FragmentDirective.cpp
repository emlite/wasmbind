#include <webbind/FragmentDirective.hpp>

namespace webbind {

FragmentDirective FragmentDirective::take_ownership(Handle h) noexcept {
    return FragmentDirective(h);
}

FragmentDirective FragmentDirective::clone() const noexcept { return *this; }

emlite::Val FragmentDirective::instance() noexcept { return emlite::Val::global("FragmentDirective"); }

FragmentDirective::FragmentDirective(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FragmentDirective::FragmentDirective(const emlite::Val &val) noexcept: emlite::Val(val) {}


} // namespace webbind