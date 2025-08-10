#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"
#include "EventInit.hpp"

namespace webbind {

class Blob;

/// Dictionary type BlobEventInit
class BlobEventInit : public EventInit {
  explicit BlobEventInit(Handle h) noexcept;
public:
    static BlobEventInit take_ownership(Handle h) noexcept;
    explicit BlobEventInit(const emlite::Val &val) noexcept;
    BlobEventInit() noexcept;
    [[nodiscard]] BlobEventInit clone() const noexcept;
    /// Getter of the `data` attribute.
    [[nodiscard]] Blob data() const;
    /// Setter of the `data` attribute.
    void data(const Blob& value);
    /// Getter of the `timecode` attribute.
    [[nodiscard]] jsbind::Any timecode() const;
    /// Setter of the `timecode` attribute.
    void timecode(const jsbind::Any& value);
};

} // namespace webbind