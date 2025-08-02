#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class USBEndpoint;
class USBInterface;


/// The USBAlternateInterface class.
/// [`USBAlternateInterface`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface)
class USBAlternateInterface : public emlite::Val {
    explicit USBAlternateInterface(Handle h) noexcept;

public:
    explicit USBAlternateInterface(const emlite::Val &val) noexcept;
    static USBAlternateInterface take_ownership(Handle h) noexcept;

    [[nodiscard]] USBAlternateInterface clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBAlternateInterface(..)` constructor, creating a new USBAlternateInterface instance
    USBAlternateInterface(const USBInterface& deviceInterface, unsigned char alternateSetting);
    /// Getter of the `alternateSetting` attribute.
    /// [`USBAlternateInterface.alternateSetting`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/alternateSetting)
    [[nodiscard]] unsigned char alternateSetting() const;
    /// Getter of the `interfaceClass` attribute.
    /// [`USBAlternateInterface.interfaceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceClass)
    [[nodiscard]] unsigned char interfaceClass() const;
    /// Getter of the `interfaceSubclass` attribute.
    /// [`USBAlternateInterface.interfaceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceSubclass)
    [[nodiscard]] unsigned char interfaceSubclass() const;
    /// Getter of the `interfaceProtocol` attribute.
    /// [`USBAlternateInterface.interfaceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceProtocol)
    [[nodiscard]] unsigned char interfaceProtocol() const;
    /// Getter of the `interfaceName` attribute.
    /// [`USBAlternateInterface.interfaceName`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceName)
    [[nodiscard]] jsbind::String interfaceName() const;
    /// Getter of the `endpoints` attribute.
    /// [`USBAlternateInterface.endpoints`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/endpoints)
    [[nodiscard]] jsbind::TypedArray<USBEndpoint> endpoints() const;
};

