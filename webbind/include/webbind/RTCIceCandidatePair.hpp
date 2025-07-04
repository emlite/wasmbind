#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class RTCIceCandidate;


class RTCIceCandidatePair : public emlite::Val {
    explicit RTCIceCandidatePair(Handle h) noexcept;

public:
    explicit RTCIceCandidatePair(const emlite::Val &val) noexcept;
    static RTCIceCandidatePair take_ownership(Handle h) noexcept;

    RTCIceCandidatePair clone() const noexcept;
    RTCIceCandidate local() const;
    RTCIceCandidate remote() const;
};

