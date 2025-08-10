#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type CloseEventInit
/// [`CloseEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/CloseEventInit)
class CloseEventInit : public EventInit {
  explicit CloseEventInit(Handle h) noexcept;
public:
    static CloseEventInit take_ownership(Handle h) noexcept;
    explicit CloseEventInit(const emlite::Val &val) noexcept;
    CloseEventInit() noexcept;
    [[nodiscard]] CloseEventInit clone() const noexcept;
    [[nodiscard]] bool wasClean() const;
    void wasClean(bool value);
    [[nodiscard]] unsigned short code() const;
    void code(unsigned short value);
    [[nodiscard]] jsbind::String reason() const;
    void reason(const jsbind::String& value);
};

} // namespace webbind