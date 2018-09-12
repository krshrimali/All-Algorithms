# How does Decision Trees handle missing values?

There are different algorithms for Decision Trees. (For example C45, CART, ID3
etc.)

Different algorithms handle missing values in different ways.

<ol>
<li><strong>ID3</strong>: Ignore missing values. </li>
<li><strong>C45</strong>: Distribute all missing values to all nodes
proportionately to their frequency.                        </li>
<li><strong>CART</strong>: Distribute all missing values to the nodes having
maximum frequency.</li>
<li><strong>C45 and CART: Fast Implementation</strong> Distribute to only one
child node randomly.</strong></li>
</ol>


# References

1. <a href="https://stats.stackexchange.com/a/96458/220296">Stats
   Stackexchange: How do decision tree learning algorithms deal with missing
values (under the hood)</a>

