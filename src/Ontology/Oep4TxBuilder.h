// SPDX-License-Identifier: Apache-2.0
//
// Copyright © 2017 Trust Wallet.

#pragma once

#include "Oep4.h"

#include "../proto/Ontology.pb.h"

#include <TrustWalletCore/TWOntologyProto.h>

namespace TW::Ontology {

class Oep4TxBuilder {

public:
    static Data decimals(const Ontology::Proto::SigningInput& input);

    static Data balanceOf(const Ontology::Proto::SigningInput& input);

    static Data transfer(const Ontology::Proto::SigningInput& input);

    static Data build(const Ontology::Proto::SigningInput& input);

    static Transaction buildTx(const Ontology::Proto::SigningInput& input);
};

} // namespace TW::Ontology
