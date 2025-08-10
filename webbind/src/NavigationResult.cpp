#include <webbind/NavigationResult.hpp>
#include <webbind/NavigationHistoryEntry.hpp>

using emlite::Val;
namespace webbind {

NavigationResult::NavigationResult(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
NavigationResult NavigationResult::take_ownership(Handle h) noexcept {
        return NavigationResult(h);
    }
NavigationResult::NavigationResult(const emlite::Val &val) noexcept: emlite::Val(val) {}
NavigationResult::NavigationResult() noexcept: emlite::Val(emlite::Val::object()) {}
NavigationResult NavigationResult::clone() const noexcept { return *this; }

jsbind::Promise<NavigationHistoryEntry> NavigationResult::committed() const {
    return emlite::Val::get("committed").as<jsbind::Promise<NavigationHistoryEntry>>();
}

void NavigationResult::committed(const jsbind::Promise<NavigationHistoryEntry>& value) {
    emlite::Val::set("committed", value);
}

jsbind::Promise<NavigationHistoryEntry> NavigationResult::finished() const {
    return emlite::Val::get("finished").as<jsbind::Promise<NavigationHistoryEntry>>();
}

void NavigationResult::finished(const jsbind::Promise<NavigationHistoryEntry>& value) {
    emlite::Val::set("finished", value);
}


} // namespace webbind