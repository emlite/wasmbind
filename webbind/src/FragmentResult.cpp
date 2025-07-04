#include <webbind/FragmentResult.hpp>


FragmentResult FragmentResult::take_ownership(Handle h) noexcept {
        return FragmentResult(h);
    }
FragmentResult FragmentResult::clone() const noexcept { return *this; }
FragmentResult::FragmentResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
FragmentResult::FragmentResult(const emlite::Val &val) noexcept: emlite::Val(val) {}


FragmentResult::FragmentResult(const jsbind::Any& options): emlite::Val(emlite::Val::global("FragmentResult").new_(options)) {}

double FragmentResult::inlineSize() const {
    return emlite::Val::get("inlineSize").as<double>();
}

double FragmentResult::blockSize() const {
    return emlite::Val::get("blockSize").as<double>();
}

