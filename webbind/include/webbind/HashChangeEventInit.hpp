#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type HashChangeEventInit
/// [`HashChangeEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/HashChangeEventInit)
class HashChangeEventInit : public EventInit {
  explicit HashChangeEventInit(Handle h) noexcept;
public:
    static HashChangeEventInit take_ownership(Handle h) noexcept;
    explicit HashChangeEventInit(const emlite::Val &val) noexcept;
    HashChangeEventInit() noexcept;
    [[nodiscard]] HashChangeEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String oldURL() const;
    void oldURL(const jsbind::String& value);
    [[nodiscard]] jsbind::String newURL() const;
    void newURL(const jsbind::String& value);
};

} // namespace webbind