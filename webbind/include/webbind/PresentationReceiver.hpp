#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PresentationConnectionList;


class PresentationReceiver : public emlite::Val {
    explicit PresentationReceiver(Handle h) noexcept;

public:
    explicit PresentationReceiver(const emlite::Val &val) noexcept;
    static PresentationReceiver take_ownership(Handle h) noexcept;

    PresentationReceiver clone() const noexcept;
    jsbind::Promise<PresentationConnectionList> connectionList() const;
};

