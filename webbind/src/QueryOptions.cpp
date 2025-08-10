#include <webbind/QueryOptions.hpp>

namespace webbind {

QueryOptions::QueryOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
QueryOptions QueryOptions::take_ownership(Handle h) noexcept {
    return QueryOptions(h);
}

QueryOptions::QueryOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}

QueryOptions::QueryOptions() noexcept: emlite::Val(emlite::Val::object()) {}

QueryOptions QueryOptions::clone() const noexcept { return *this; }

jsbind::TypedArray<jsbind::String> QueryOptions::postscriptNames() const {
    return emlite::Val::get("postscriptNames").as<jsbind::TypedArray<jsbind::String>>();
}

void QueryOptions::postscriptNames(const jsbind::TypedArray<jsbind::String>& value) {
    emlite::Val::set("postscriptNames", value);
}


} // namespace webbind