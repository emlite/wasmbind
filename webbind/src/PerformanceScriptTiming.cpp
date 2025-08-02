#include <webbind/PerformanceScriptTiming.hpp>
#include <webbind/Window.hpp>


PerformanceScriptTiming PerformanceScriptTiming::take_ownership(Handle h) noexcept {
        return PerformanceScriptTiming(h);
    }
PerformanceScriptTiming PerformanceScriptTiming::clone() const noexcept { return *this; }
emlite::Val PerformanceScriptTiming::instance() noexcept { return emlite::Val::global("PerformanceScriptTiming"); }
PerformanceScriptTiming::PerformanceScriptTiming(Handle h) noexcept : PerformanceEntry(emlite::Val::take_ownership(h)) {}
PerformanceScriptTiming::PerformanceScriptTiming(const emlite::Val &val) noexcept: PerformanceEntry(val) {}


jsbind::Any PerformanceScriptTiming::startTime() const {
    return PerformanceEntry::get("startTime").as<jsbind::Any>();
}

jsbind::Any PerformanceScriptTiming::duration() const {
    return PerformanceEntry::get("duration").as<jsbind::Any>();
}

jsbind::String PerformanceScriptTiming::name() const {
    return PerformanceEntry::get("name").as<jsbind::String>();
}

jsbind::String PerformanceScriptTiming::entryType() const {
    return PerformanceEntry::get("entryType").as<jsbind::String>();
}

ScriptInvokerType PerformanceScriptTiming::invokerType() const {
    return PerformanceEntry::get("invokerType").as<ScriptInvokerType>();
}

jsbind::String PerformanceScriptTiming::invoker() const {
    return PerformanceEntry::get("invoker").as<jsbind::String>();
}

jsbind::Any PerformanceScriptTiming::executionStart() const {
    return PerformanceEntry::get("executionStart").as<jsbind::Any>();
}

jsbind::String PerformanceScriptTiming::sourceURL() const {
    return PerformanceEntry::get("sourceURL").as<jsbind::String>();
}

jsbind::String PerformanceScriptTiming::sourceFunctionName() const {
    return PerformanceEntry::get("sourceFunctionName").as<jsbind::String>();
}

long long PerformanceScriptTiming::sourceCharPosition() const {
    return PerformanceEntry::get("sourceCharPosition").as<long long>();
}

jsbind::Any PerformanceScriptTiming::pauseDuration() const {
    return PerformanceEntry::get("pauseDuration").as<jsbind::Any>();
}

jsbind::Any PerformanceScriptTiming::forcedStyleAndLayoutDuration() const {
    return PerformanceEntry::get("forcedStyleAndLayoutDuration").as<jsbind::Any>();
}

Window PerformanceScriptTiming::window() const {
    return PerformanceEntry::get("window").as<Window>();
}

ScriptWindowAttribution PerformanceScriptTiming::windowAttribution() const {
    return PerformanceEntry::get("windowAttribution").as<ScriptWindowAttribution>();
}

jsbind::Object PerformanceScriptTiming::toJSON() {
    return PerformanceEntry::call("toJSON").as<jsbind::Object>();
}

