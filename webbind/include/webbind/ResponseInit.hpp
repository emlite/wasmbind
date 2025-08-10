#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

namespace webbind {

/// Dictionary type ResponseInit
/// [`ResponseInit`](https://developer.mozilla.org/en-US/docs/Web/API/ResponseInit)
class ResponseInit : public emlite::Val {
  explicit ResponseInit(Handle h) noexcept;
public:
    static ResponseInit take_ownership(Handle h) noexcept;
    explicit ResponseInit(const emlite::Val &val) noexcept;
    ResponseInit() noexcept;
    [[nodiscard]] ResponseInit clone() const noexcept;
    [[nodiscard]] unsigned short status() const;
    void status(unsigned short value);
    [[nodiscard]] jsbind::String statusText() const;
    void statusText(const jsbind::String& value);
    [[nodiscard]] jsbind::Any headers() const;
    void headers(const jsbind::Any& value);
};

} // namespace webbind