#pragma once

#include <emlite/emlite.hpp>
#include <jsbind/jsbind.hpp>
#include "enums.hpp"

class PresentationRequest;
class PresentationReceiver;


class Presentation : public emlite::Val {
    explicit Presentation(Handle h) noexcept;

public:
    explicit Presentation(const emlite::Val &val) noexcept;
    static Presentation take_ownership(Handle h) noexcept;

    Presentation clone() const noexcept;
    PresentationRequest defaultRequest() const;
    void defaultRequest(const PresentationRequest& value);
    PresentationReceiver receiver() const;
};

