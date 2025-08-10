#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class USBInterface;
class USBEndpoint;

/// Interface USBAlternateInterface
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
    /// [`USBAlternateInterface.alternateSetting`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/alternateSetting)
    /// [`USBAlternateInterface.alternateSetting`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/alternateSetting)
    [[nodiscard]] unsigned char alternateSetting() const;
    /// [`USBAlternateInterface.interfaceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceClass)
    /// [`USBAlternateInterface.interfaceClass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceClass)
    [[nodiscard]] unsigned char interfaceClass() const;
    /// [`USBAlternateInterface.interfaceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceSubclass)
    /// [`USBAlternateInterface.interfaceSubclass`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceSubclass)
    [[nodiscard]] unsigned char interfaceSubclass() const;
    /// [`USBAlternateInterface.interfaceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceProtocol)
    /// [`USBAlternateInterface.interfaceProtocol`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceProtocol)
    [[nodiscard]] unsigned char interfaceProtocol() const;
    /// [`USBAlternateInterface.interfaceName`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceName)
    /// [`USBAlternateInterface.interfaceName`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/interfaceName)
    [[nodiscard]] jsbind::String interfaceName() const;
    /// [`USBAlternateInterface.endpoints`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/endpoints)
    /// [`USBAlternateInterface.endpoints`](https://developer.mozilla.org/en-US/docs/Web/API/USBAlternateInterface/endpoints)
    [[nodiscard]] jsbind::TypedArray<USBEndpoint> endpoints() const;
};

} // namespace webbind