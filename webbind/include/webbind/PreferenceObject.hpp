#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


class PreferenceObject : public EventTarget {
    explicit PreferenceObject(Handle h) noexcept;

public:
    explicit PreferenceObject(const emlite::Val &val) noexcept;
    static PreferenceObject take_ownership(Handle h) noexcept;

    PreferenceObject clone() const noexcept;
    jsbind::DOMString override() const;
    jsbind::DOMString value() const;
    jsbind::FrozenArray<jsbind::DOMString> validValues() const;
    jsbind::Undefined clearOverride();
    jsbind::Promise<jsbind::Undefined> requestOverride(const jsbind::DOMString& value);
    jsbind::Any onchange() const;
    void onchange(const jsbind::Any& value);
};

