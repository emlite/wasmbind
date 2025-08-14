#include <webbind/FetchLaterResult.hpp>

namespace webbind {

FetchLaterResult FetchLaterResult::take_ownership(Handle h) noexcept {
    return FetchLaterResult(h);
}

FetchLaterResult FetchLaterResult::clone() const noexcept { return *this; }

emlite::Val FetchLaterResult::instance() noexcept { return emlite::Val::global("FetchLaterResult"); }

FetchLaterResult::FetchLaterResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}

FetchLaterResult::FetchLaterResult(const emlite::Val &val) noexcept: emlite::Val(val) {}

bool FetchLaterResult::activated() const {
    return emlite::Val::get("activated").as<bool>();
}


} // namespace webbind