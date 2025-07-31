#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "EventTarget.hpp"
#include "enums.hpp"


/// The PreferenceObject class.
/// [`PreferenceObject`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject)
class PreferenceObject : public EventTarget {
    explicit PreferenceObject(Handle h) noexcept;

public:
    explicit PreferenceObject(const emlite::Val &val) noexcept;
    static PreferenceObject take_ownership(Handle h) noexcept;

    [[nodiscard]] PreferenceObject clone() const noexcept;
    /// Getter of the `override` attribute.
    /// [`PreferenceObject.override`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/override)
    [[nodiscard]] jsbind::String override() const;
    /// Getter of the `value` attribute.
    /// [`PreferenceObject.value`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/value)
    [[nodiscard]] jsbind::String value() const;
    /// Getter of the `validValues` attribute.
    /// [`PreferenceObject.validValues`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/validValues)
    [[nodiscard]] jsbind::TypedArray<jsbind::String> validValues() const;
    /// The clearOverride method.
    /// [`PreferenceObject.clearOverride`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/clearOverride)
    jsbind::Undefined clearOverride();
    /// The requestOverride method.
    /// [`PreferenceObject.requestOverride`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/requestOverride)
    jsbind::Promise<jsbind::Undefined> requestOverride(const jsbind::String& value);
    /// Getter of the `onchange` attribute.
    /// [`PreferenceObject.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/onchange)
    [[nodiscard]] jsbind::Any onchange() const;
    /// Setter of the `onchange` attribute.
    /// [`PreferenceObject.onchange`](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceObject/onchange)
    void onchange(const jsbind::Any& value);
};

