#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type WebTransportCloseInfo
/// [`WebTransportCloseInfo`](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportCloseInfo)
class WebTransportCloseInfo : public emlite::Val {
  explicit WebTransportCloseInfo(Handle h) noexcept;
public:
    static WebTransportCloseInfo take_ownership(Handle h) noexcept;
    explicit WebTransportCloseInfo(const emlite::Val &val) noexcept;
    WebTransportCloseInfo() noexcept;
    [[nodiscard]] WebTransportCloseInfo clone() const noexcept;
    [[nodiscard]] unsigned long closeCode() const;
    void closeCode(unsigned long value);
    [[nodiscard]] jsbind::String reason() const;
    void reason(const jsbind::String& value);
};

} // namespace webbind