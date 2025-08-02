#include <webbind/IDBKeyRange.hpp>


IDBKeyRange IDBKeyRange::take_ownership(Handle h) noexcept {
        return IDBKeyRange(h);
    }
IDBKeyRange IDBKeyRange::clone() const noexcept { return *this; }
emlite::Val IDBKeyRange::instance() noexcept { return emlite::Val::global("IDBKeyRange"); }
IDBKeyRange::IDBKeyRange(Handle h) noexcept : emlite::Val(emlite::Val::take_ownership(h)) {}
IDBKeyRange::IDBKeyRange(const emlite::Val &val) noexcept: emlite::Val(val) {}


jsbind::Any IDBKeyRange::lower() const {
    return emlite::Val::get("lower").as<jsbind::Any>();
}

jsbind::Any IDBKeyRange::upper() const {
    return emlite::Val::get("upper").as<jsbind::Any>();
}

bool IDBKeyRange::lowerOpen() const {
    return emlite::Val::get("lowerOpen").as<bool>();
}

bool IDBKeyRange::upperOpen() const {
    return emlite::Val::get("upperOpen").as<bool>();
}

IDBKeyRange IDBKeyRange::only(const jsbind::Any& value) {
    return emlite::Val::global("idbkeyrange").call("only", value).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::lowerBound(const jsbind::Any& lower) {
    return emlite::Val::global("idbkeyrange").call("lowerBound", lower).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::lowerBound(const jsbind::Any& lower, bool open) {
    return emlite::Val::global("idbkeyrange").call("lowerBound", lower, open).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::upperBound(const jsbind::Any& upper) {
    return emlite::Val::global("idbkeyrange").call("upperBound", upper).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::upperBound(const jsbind::Any& upper, bool open) {
    return emlite::Val::global("idbkeyrange").call("upperBound", upper, open).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::bound(const jsbind::Any& lower, const jsbind::Any& upper) {
    return emlite::Val::global("idbkeyrange").call("bound", lower, upper).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::bound(const jsbind::Any& lower, const jsbind::Any& upper, bool lowerOpen) {
    return emlite::Val::global("idbkeyrange").call("bound", lower, upper, lowerOpen).as<IDBKeyRange>();
}

IDBKeyRange IDBKeyRange::bound(const jsbind::Any& lower, const jsbind::Any& upper, bool lowerOpen, bool upperOpen) {
    return emlite::Val::global("idbkeyrange").call("bound", lower, upper, lowerOpen, upperOpen).as<IDBKeyRange>();
}

bool IDBKeyRange::includes(const jsbind::Any& key) {
    return emlite::Val::call("includes", key).as<bool>();
}

