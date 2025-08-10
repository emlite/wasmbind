#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportCloseInfo
class WebTransportCloseInfo : public emlite::Val {
  explicit WebTransportCloseInfo(Handle h) noexcept;
public:
    static WebTransportCloseInfo take_ownership(Handle h) noexcept;
    explicit WebTransportCloseInfo(const emlite::Val &val) noexcept;
    WebTransportCloseInfo() noexcept;
    [[nodiscard]] WebTransportCloseInfo clone() const noexcept;
    /// Getter of the `closeCode` attribute.
    [[nodiscard]] unsigned long closeCode() const;
    /// Setter of the `closeCode` attribute.
    void closeCode(unsigned long value);
    /// Getter of the `reason` attribute.
    [[nodiscard]] jsbind::String reason() const;
    /// Setter of the `reason` attribute.
    void reason(const jsbind::String& value);
};

} // namespace webbind