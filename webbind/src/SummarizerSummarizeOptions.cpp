#include <webbind/SummarizerSummarizeOptions.hpp>
#include <webbind/AbortSignal.hpp>

using emlite::Val;
namespace webbind {

SummarizerSummarizeOptions::SummarizerSummarizeOptions(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
SummarizerSummarizeOptions SummarizerSummarizeOptions::take_ownership(Handle h) noexcept {
        return SummarizerSummarizeOptions(h);
    }
SummarizerSummarizeOptions::SummarizerSummarizeOptions(const emlite::Val &val) noexcept: emlite::Val(val) {}
SummarizerSummarizeOptions::SummarizerSummarizeOptions() noexcept: emlite::Val(emlite::Val::object()) {}
SummarizerSummarizeOptions SummarizerSummarizeOptions::clone() const noexcept { return *this; }

AbortSignal SummarizerSummarizeOptions::signal() const {
    return emlite::Val::get("signal").as<AbortSignal>();
}

void SummarizerSummarizeOptions::signal(const AbortSignal& value) {
    emlite::Val::set("signal", value);
}

jsbind::String SummarizerSummarizeOptions::context() const {
    return emlite::Val::get("context").as<jsbind::String>();
}

void SummarizerSummarizeOptions::context(const jsbind::String& value) {
    emlite::Val::set("context", value);
}


} // namespace webbind