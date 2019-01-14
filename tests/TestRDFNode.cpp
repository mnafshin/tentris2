#include <gtest/gtest.h>

#include <iostream>

#include <tnt/store/RDF/Term.hpp>

// TODO: make it a real testcase

namespace {
    using namespace tnt::store::rdf;
}

TEST(Node, DISABLED_polymorphism) {
    using namespace tnt::store;

    const char *string = "\"asdasd\"^^<dsa>";
    std::string lit{string};
    std::shared_ptr<Term> instance{new Literal{lit}};
    Term::NodeType type = instance->type();
    std::cout << type << std::endl;
}


