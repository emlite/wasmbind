#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBInterface;
class USBDevice;


/// The USBConfiguration class.
/// [`USBConfiguration`](https://developer.mozilla.org/en-US/docs/Web/API/USBConfiguration)
class USBConfiguration : public emlite::Val {
    explicit USBConfiguration(Handle h) noexcept;

public:
    explicit USBConfiguration(const emlite::Val &val) noexcept;
    static USBConfiguration take_ownership(Handle h) noexcept;

    [[nodiscard]] USBConfiguration clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBConfiguration(..)` constructor, creating a new USBConfiguration instance
    USBConfiguration(const USBDevice& device, unsigned char configurationValue);
    /// Getter of the `configurationValue` attribute.
    /// [`USBConfiguration.configurationValue`](https://developer.mozilla.org/en-US/docs/Web/API/USBConfiguration/configurationValue)
    [[nodiscard]] unsigned char configurationValue() const;
    /// Getter of the `configurationName` attribute.
    /// [`USBConfiguration.configurationName`](https://developer.mozilla.org/en-US/docs/Web/API/USBConfiguration/configurationName)
    [[nodiscard]] jsbind::String configurationName() const;
    /// Getter of the `interfaces` attribute.
    /// [`USBConfiguration.interfaces`](https://developer.mozilla.org/en-US/docs/Web/API/USBConfiguration/interfaces)
    [[nodiscard]] jsbind::TypedArray<USBInterface> interfaces() const;
};

