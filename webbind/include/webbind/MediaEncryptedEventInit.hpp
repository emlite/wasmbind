#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaEncryptedEventInit
class MediaEncryptedEventInit : public EventInit {
  explicit MediaEncryptedEventInit(Handle h) noexcept;
public:
    static MediaEncryptedEventInit take_ownership(Handle h) noexcept;
    explicit MediaEncryptedEventInit(const emlite::Val &val) noexcept;
    MediaEncryptedEventInit() noexcept;
    [[nodiscard]] MediaEncryptedEventInit clone() const noexcept;
    /// Getter of the `initDataType` attribute.
    [[nodiscard]] jsbind::String initDataType() const;
    /// Setter of the `initDataType` attribute.
    void initDataType(const jsbind::String& value);
    /// Getter of the `initData` attribute.
    [[nodiscard]] jsbind::ArrayBuffer initData() const;
    /// Setter of the `initData` attribute.
    void initData(const jsbind::ArrayBuffer& value);
};

} // namespace webbind