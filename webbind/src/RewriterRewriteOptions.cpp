#include "webbind/RewriterRewriteOptions.hpp"
#include "webbind/AbortSignal.hpp"

using emlite::Val;
namespace webbind {

RewriterRewriteOptions::RewriterRewriteOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
RewriterRewriteOptions RewriterRewriteOptions::take_ownership(Handle h) noexcept {
        return RewriterRewriteOptions(h);
    }
RewriterRewriteOptions::RewriterRewriteOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
RewriterRewriteOptions::RewriterRewriteOptions() noexcept: emlite::Val(emlite::Val::object()) {}
RewriterRewriteOptions RewriterRewriteOptions::clone() const noexcept { return *this; }

jsbind::String RewriterRewriteOptions::context() const {
    return emlite::Val::get("context").as<jsbind::String>();
}

void RewriterRewriteOptions::context(const jsbind::String& value) {
    emlite::Val::set("context", value);
}

AbortSignal RewriterRewriteOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void RewriterRewriteOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}


} // namespace webbind