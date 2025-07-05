#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class VideoColorSpaceInit;


class VideoColorSpaceInit : public emlite::Val {
  explicit VideoColorSpaceInit(Handle h) noexcept;
public:
    static VideoColorSpaceInit take_ownership(Handle h) noexcept;
    explicit VideoColorSpaceInit(const emlite::Val &val) noexcept;
    VideoColorSpaceInit() noexcept;
    VideoColorSpaceInit clone() const noexcept;
    VideoColorPrimaries primaries() const;
    void primaries(const VideoColorPrimaries& value);
    VideoTransferCharacteristics transfer() const;
    void transfer(const VideoTransferCharacteristics& value);
    VideoMatrixCoefficients matrix() const;
    void matrix(const VideoMatrixCoefficients& value);
    bool fullRange() const;
    void fullRange(bool value);
};

class VideoColorSpace : public emlite::Val {
    explicit VideoColorSpace(Handle h) noexcept;

public:
    explicit VideoColorSpace(const emlite::Val &val) noexcept;
    static VideoColorSpace take_ownership(Handle h) noexcept;

    VideoColorSpace clone() const noexcept;
    VideoColorSpace();
    VideoColorSpace(const VideoColorSpaceInit& init);
    VideoColorPrimaries primaries() const;
    VideoTransferCharacteristics transfer() const;
    VideoMatrixCoefficients matrix() const;
    bool fullRange() const;
    VideoColorSpaceInit toJSON();
};

