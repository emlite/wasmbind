#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"


/// The MediaKeyStatusMap class.
/// [`MediaKeyStatusMap`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatusMap)
class MediaKeyStatusMap : public emlite::Val {
    explicit MediaKeyStatusMap(Handle h) noexcept;

public:
    explicit MediaKeyStatusMap(const emlite::Val &val) noexcept;
    static MediaKeyStatusMap take_ownership(Handle h) noexcept;

    [[nodiscard]] MediaKeyStatusMap clone() const noexcept;
    [[nodiscard]] static emlite::Val instance() noexcept;
    /// Getter of the `size` attribute.
    /// [`MediaKeyStatusMap.size`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatusMap/size)
    [[nodiscard]] unsigned long size() const;
    /// The has method.
    /// [`MediaKeyStatusMap.has`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatusMap/has)
    bool has(const jsbind::Any& keyId);
    /// The get method.
    /// [`MediaKeyStatusMap.get`](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeyStatusMap/get)
    jsbind::Any get(const jsbind::Any& keyId);
};

