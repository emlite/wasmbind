#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type HashChangeEventInit
class HashChangeEventInit : public EventInit {
  explicit HashChangeEventInit(Handle h) noexcept;
public:
    static HashChangeEventInit take_ownership(Handle h) noexcept;
    explicit HashChangeEventInit(const emlite::Val &val) noexcept;
    HashChangeEventInit() noexcept;
    [[nodiscard]] HashChangeEventInit clone() const noexcept;
    /// Getter of the `oldURL` attribute.
    [[nodiscard]] jsbind::String oldURL() const;
    /// Setter of the `oldURL` attribute.
    void oldURL(const jsbind::String& value);
    /// Getter of the `newURL` attribute.
    [[nodiscard]] jsbind::String newURL() const;
    /// Setter of the `newURL` attribute.
    void newURL(const jsbind::String& value);
};

} // namespace webbind