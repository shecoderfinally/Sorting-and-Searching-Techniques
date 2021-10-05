/* Given a binary tree root, return the maximum sum of all keys of any sub-tree which is also a Binary Search Tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
*/





class Solution {
    public class BST_pair{
        boolean isBst=true;
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        int sum=0;
        int ans=0;
    }
    public int maxSumBST(TreeNode root) {
        return maxSumBST1(root).ans;
    }
    public BST_pair maxSumBST1(TreeNode node)
    {
        if(node==null)
        {
            return new BST_pair();
        }
        BST_pair lp= maxSumBST1(node.left);
        BST_pair rp= maxSumBST1(node.right);
        BST_pair sp= new BST_pair();
        int sum= lp.sum + rp.sum + node.val;
        if(lp.isBst && rp.isBst && lp.max<node.val && rp.min>node.val)
        {
            sp.isBst=true;
             sp.sum=sum;
            sp.min=Math.min(lp.min,node.val);
            sp.max=Math.max(rp.max,node.val);
            
            sp.ans=Math.max(lp.ans,Math.max(rp.ans,sp.sum));
            return sp;
        }
            sp.isBst=false;
            sp.sum=sum;
            sp.min=Math.min(lp.min,node.val);
            sp.max=Math.max(rp.max,node.val);
            sp.ans=Math.max(lp.ans,rp.ans);
            return sp;
    }
}