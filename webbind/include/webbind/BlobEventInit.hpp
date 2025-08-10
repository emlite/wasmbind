#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Blob;

/// Dictionary type BlobEventInit
/// [`BlobEventInit`](https://developer.mozilla.org/en-US/docs/Web/API/BlobEventInit)
class BlobEventInit : public EventInit {
  explicit BlobEventInit(Handle h) noexcept;
public:
    static BlobEventInit take_ownership(Handle h) noexcept;
    explicit BlobEventInit(const emlite::Val &val) noexcept;
    BlobEventInit() noexcept;
    [[nodiscard]] BlobEventInit clone() const noexcept;
    [[nodiscard]] Blob data() const;
    void data(const Blob& value);
    [[nodiscard]] jsbind::Any timecode() const;
    void timecode(const jsbind::Any& value);
};

} // namespace webbind