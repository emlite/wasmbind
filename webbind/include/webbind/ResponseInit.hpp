#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ResponseInit
class ResponseInit : public emlite::Val {
  explicit ResponseInit(Handle h) noexcept;
public:
    static ResponseInit take_ownership(Handle h) noexcept;
    explicit ResponseInit(const emlite::Val &val) noexcept;
    ResponseInit() noexcept;
    [[nodiscard]] ResponseInit clone() const noexcept;
    /// Getter of the `status` attribute.
    [[nodiscard]] unsigned short status() const;
    /// Setter of the `status` attribute.
    void status(unsigned short value);
    /// Getter of the `statusText` attribute.
    [[nodiscard]] jsbind::String statusText() const;
    /// Setter of the `statusText` attribute.
    void statusText(const jsbind::String& value);
    /// Getter of the `headers` attribute.
    [[nodiscard]] jsbind::Any headers() const;
    /// Setter of the `headers` attribute.
    void headers(const jsbind::Any& value);
};

} // namespace webbind