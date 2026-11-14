/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nanasser <nanasser@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 02:28:10 by nanasser          #+#    #+#             */
/*   Updated: 2026/11/10 02:28:10 by nanasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "=== 1. STANDARD MUTANTSTACK TEST ===" << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl; // Output: 17

	mstack.pop(); // Now only 5

	std::cout << mstack.size() << std::endl; // Output: 1

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin(); // This is bottom of stack (oldest)
	MutantStack<int>::iterator ite = mstack.end(); // This is top of stack (recent)

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "Copied std::stack size: " << s.size() << std::endl;


    std::cout << "\n=== 2. CONST MUTANTSTACK TEST ===" << std::endl;
    // Copy mstack into a const instance to force const_iterator usage
    const MutantStack<int> constStack(mstack);

    MutantStack<int>::const_iterator cit = constStack.cbegin();
    MutantStack<int>::const_iterator cite = constStack.cend();
    
    // *cit = 42; // Uncommenting this MUST fail to compile (read-only)
    std::cout << "Const forward traversal:" << std::endl;
    while (cit != cite)
    {
        std::cout << *cit << " ";
        ++cit;
    }
    std::cout << std::endl;

    // Reverse const traversal (top to bottom)
    MutantStack<int>::const_reverse_iterator crit = constStack.crbegin();
    MutantStack<int>::const_reverse_iterator crite = constStack.crend();
    std::cout << "Const reverse traversal (top -> bottom):" << std::endl;
    while (crit != crite)
    {
        std::cout << *crit << " ";
        ++crit;
    }
    std::cout << std::endl;


    std::cout << "\n=== 3. STD::LIST COMPARISON TEST ===" << std::endl;
    std::list<int> lst;

    lst.push_back(5);
    lst.push_back(17);
    std::cout << "Top (back): " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "Size: " << lst.size() << std::endl;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    ++lit;
    --lit;
    while (lit != lite)
    {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return 0;
}
