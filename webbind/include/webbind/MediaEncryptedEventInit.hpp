#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

/// Dictionary type MediaEncryptedEventInit
/// [`MediaEncryptedEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/MediaEncryptedEventInit)
class MediaEncryptedEventInit : public EventInit {
  explicit MediaEncryptedEventInit(Handle h) noexcept;
public:
    static MediaEncryptedEventInit take_ownership(Handle h) noexcept;
    explicit MediaEncryptedEventInit(const emlite::Val &val) noexcept;
    MediaEncryptedEventInit() noexcept;
    [[nodiscard]] MediaEncryptedEventInit clone() const noexcept;
    [[nodiscard]] jsbind::String initDataType() const;
    void initDataType(const jsbind::String& value);
    [[nodiscard]] jsbind::ArrayBuffer initData() const;
    void initData(const jsbind::ArrayBuffer& value);
};

} // namespace webbind