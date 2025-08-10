#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

class USBConfiguration;
class USBAlternateInterface;

/// Interface USBInterface
/// [`USBInterface`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface)
class USBInterface : public emlite::Val {
    explicit USBInterface(Handle h) noexcept;
public:
    explicit USBInterface(const emlite::Val &val) noexcept;
    static USBInterface take_ownership(Handle h) noexcept;
    [[nodiscard]] USBInterface clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// The `new USBInterface(..)` constructor, creating a new USBInterface instance
    USBInterface(const USBConfiguration& configuration, unsigned char interfaceNumber);
    /// [`USBInterface.interfaceNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/interfaceNumber)
    /// [`USBInterface.interfaceNumber`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/interfaceNumber)
    [[nodiscard]] unsigned char interfaceNumber() const;
    /// [`USBInterface.alternate`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/alternate)
    /// [`USBInterface.alternate`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/alternate)
    [[nodiscard]] USBAlternateInterface alternate() const;
    /// [`USBInterface.alternates`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/alternates)
    /// [`USBInterface.alternates`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/alternates)
    [[nodiscard]] jsbind::TypedArray<USBAlternateInterface> alternates() const;
    /// [`USBInterface.claimed`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/claimed)
    /// [`USBInterface.claimed`](https://developer.mozilla.org/en-US/docs/Web/API/USBInterface/claimed)
    [[nodiscard]] bool claimed() const;
};

} // namespace webbind